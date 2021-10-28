/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, April 30, 2021 at 11:36:41 AM Mountain Standard Time
                       * Operating System: Version 13.5.1 (Build 17F80)
                       * Image Source: /System/Library/PrivateFrameworks/ChatKit.framework/ChatKit
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

@class NSArray;


@protocol CKPickerBarView <NSObject>
@property (nonatomic,copy) NSArray * acknowledgmentViews; 
@required
-(id)initWithGroupCounts:(id)arg1 selectedType:(long long)arg2 orientation:(char)arg3;
-(NSArray *)acknowledgmentViews;
-(void)performShowAnimation:(/*^block*/id)arg1;
-(void)performSendAnimation:(/*^block*/id)arg1;
-(void)performCancelAnimation:(/*^block*/id)arg1;
-(void)performSelectedAnimation:(/*^block*/id)arg1;
-(void)setAcknowledgmentViews:(id)arg1;

@end
