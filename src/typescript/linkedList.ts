class ListElement {
    dataVal: string;
    nextNode: ListElement | null;
    constructor(dataval: string, nextNode?: ListElement) {
        this.dataVal = dataval;
        this.nextNode = nextNode ? nextNode : null;
    }
}

class SLinkedList {
    headVal: ListElement;
    constructor(StartNode: ListElement) {
        this.headVal = StartNode;
    }

    listPrint() {
        let printVal: ListElement | null = this.headVal;
        while (printVal != null) {
            console.log(printVal.dataVal);
            printVal = printVal.nextNode;
        }
    }
}

const lastNode = new ListElement("wednesday");
const secondLastNode = new ListElement("tuesday", lastNode);
const firstNode = new ListElement("monday", secondLastNode);

const travellingAgent = new SLinkedList(firstNode);

travellingAgent.listPrint();