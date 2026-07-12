typedef struct Node{
    char data;
    struct Node* next;
}Node;
Node *top = NULL;
void push(char value){
    Node *newNode = (Node*)malloc(sizeof(Node));
    if(newNode==NULL){
        printf("Stack Overflow!\n");
        return;
    }
    newNode->data =  value;
    newNode->next = top;
    top = newNode;
}
char pop(){
    if(top==NULL){
        printf("Stack Underflow!");
        return '\0';
    }
    Node *temp = top;
    char value = temp->data;
    top = top->next;
    free(temp);
    return value;
}
char peek(){
    if(top!=NULL){
        return top->data;
    }
    printf("Stack is empty.\n");
    return -'\0';
}
bool isEmpty(){
    return top==NULL;
}

bool isPair(char b, char e){
    if(b=='(' && e==')') return true;
    if(b=='{' && e=='}') return true;
    if(b=='[' && e==']') return true;
    return false;
}
bool isValid(char* s) {
    while(!isEmpty()) pop();
    for(int i=0; s[i]!='\0'; i++){
        if(s[i]=='(' || s[i]=='{' || s[i]=='['){
            push(s[i]);
        }else if(s[i]==')' || s[i]=='}' || s[i]==']'){
            if(isEmpty()) return false;
            char ch = pop();
            if(!isPair(ch, s[i])) return false;
        }
    }  
    return isEmpty(); 
}