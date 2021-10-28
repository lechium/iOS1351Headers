/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, April 30, 2021 at 11:36:14 AM Mountain Standard Time
                       * Operating System: Version 13.5.1 (Build 17F80)
                       * Image Source: /System/Library/PrivateFrameworks/AppleMediaServices.framework/AppleMediaServices
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@class NSString;

@interface AMSDoubleLinkedListNode : NSObject {

	AMSDoubleLinkedListNode* _previous;
	id _object;
	AMSDoubleLinkedListNode* _next;
	NSString* _listIdentifier;

}

@property (nonatomic,retain) NSString * listIdentifier;                       //@synthesize listIdentifier=_listIdentifier - In the implementation block
@property (nonatomic,retain) AMSDoubleLinkedListNode * previous;              //@synthesize previous=_previous - In the implementation block
@property (nonatomic,retain) id object;                                       //@synthesize object=_object - In the implementation block
@property (nonatomic,retain) AMSDoubleLinkedListNode * next;                  //@synthesize next=_next - In the implementation block
-(id)init;
-(id)object;
-(id)initWithObject:(id)arg1 ;
-(void)setObject:(id)arg1 ;
-(AMSDoubleLinkedListNode *)next;
-(AMSDoubleLinkedListNode *)previous;
-(void)setNext:(AMSDoubleLinkedListNode *)arg1 ;
-(NSString *)listIdentifier;
-(void)setPrevious:(AMSDoubleLinkedListNode *)arg1 ;
-(void)setListIdentifier:(NSString *)arg1 ;
@end
