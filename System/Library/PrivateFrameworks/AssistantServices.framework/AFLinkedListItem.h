/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, April 30, 2021 at 11:36:19 AM Mountain Standard Time
                       * Operating System: Version 13.5.1 (Build 17F80)
                       * Image Source: /System/Library/PrivateFrameworks/AssistantServices.framework/AssistantServices
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@interface AFLinkedListItem : NSObject {

	id _object;
	AFLinkedListItem* _previousItem;
	AFLinkedListItem* _nextItem;

}

@property (nonatomic,readonly) id object;                                  //@synthesize object=_object - In the implementation block
@property (nonatomic,retain) AFLinkedListItem * previousItem;              //@synthesize previousItem=_previousItem - In the implementation block
@property (nonatomic,retain) AFLinkedListItem * nextItem;                  //@synthesize nextItem=_nextItem - In the implementation block
-(id)object;
-(id)initWithObject:(id)arg1 ;
-(void)removeFromList;
-(AFLinkedListItem *)previousItem;
-(AFLinkedListItem *)nextItem;
-(void)insertAfterItem:(id)arg1 ;
-(void)setNextItem:(AFLinkedListItem *)arg1 ;
-(void)setPreviousItem:(AFLinkedListItem *)arg1 ;
-(void)insertBeforeItem:(id)arg1 ;
@end

