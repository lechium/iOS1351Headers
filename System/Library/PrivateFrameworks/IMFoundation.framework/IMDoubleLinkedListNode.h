/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, April 30, 2021 at 11:35:38 AM Mountain Standard Time
                       * Operating System: Version 13.5.1 (Build 17F80)
                       * Image Source: /System/Library/PrivateFrameworks/IMFoundation.framework/IMFoundation
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@interface IMDoubleLinkedListNode : NSObject {

	IMDoubleLinkedListNode* _prev;
	IMDoubleLinkedListNode* _next;
	id _object;

}

@property (retain) IMDoubleLinkedListNode * prev;              //@synthesize prev=_prev - In the implementation block
@property (retain) IMDoubleLinkedListNode * next;              //@synthesize next=_next - In the implementation block
@property (retain) id object;                                  //@synthesize object=_object - In the implementation block
-(void)dealloc;
-(id)object;
-(id)initWithObject:(id)arg1 ;
-(void)setObject:(id)arg1 ;
-(IMDoubleLinkedListNode *)next;
-(IMDoubleLinkedListNode *)prev;
-(void)setNext:(IMDoubleLinkedListNode *)arg1 ;
-(void)setPrev:(IMDoubleLinkedListNode *)arg1 ;
-(void)removeFromList;
-(void)orphan;
@end
