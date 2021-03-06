/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, April 30, 2021 at 11:36:33 AM Mountain Standard Time
                       * Operating System: Version 13.5.1 (Build 17F80)
                       * Image Source: /System/Library/PrivateFrameworks/StoreServices.framework/StoreServices
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@class NSString;

@interface SSDoubleLinkedListNode : NSObject {

	SSDoubleLinkedListNode* _previous;
	id _object;
	SSDoubleLinkedListNode* _next;
	NSString* _listIdentifier;

}

@property (nonatomic,retain) NSString * listIdentifier;                      //@synthesize listIdentifier=_listIdentifier - In the implementation block
@property (nonatomic,retain) SSDoubleLinkedListNode * previous;              //@synthesize previous=_previous - In the implementation block
@property (nonatomic,retain) id object;                                      //@synthesize object=_object - In the implementation block
@property (nonatomic,retain) SSDoubleLinkedListNode * next;                  //@synthesize next=_next - In the implementation block
-(id)init;
-(id)object;
-(id)initWithObject:(id)arg1 ;
-(void)setObject:(id)arg1 ;
-(SSDoubleLinkedListNode *)next;
-(SSDoubleLinkedListNode *)previous;
-(void)setNext:(SSDoubleLinkedListNode *)arg1 ;
-(NSString *)listIdentifier;
-(void)setPrevious:(SSDoubleLinkedListNode *)arg1 ;
-(void)setListIdentifier:(NSString *)arg1 ;
@end

