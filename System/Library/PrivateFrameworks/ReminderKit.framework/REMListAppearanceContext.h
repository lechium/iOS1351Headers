/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, April 30, 2021 at 11:36:45 AM Mountain Standard Time
                       * Operating System: Version 13.5.1 (Build 17F80)
                       * Image Source: /System/Library/PrivateFrameworks/ReminderKit.framework/ReminderKit
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@class REMList, NSString;

@interface REMListAppearanceContext : NSObject {

	REMList* _list;

}

@property (nonatomic,retain) REMList * list;                        //@synthesize list=_list - In the implementation block
@property (nonatomic,readonly) NSString * badgeEmblem; 
-(REMList *)list;
-(id)initWithList:(id)arg1 ;
-(void)setList:(REMList *)arg1 ;
-(NSString *)badgeEmblem;
-(BOOL)showingLargeAttachments;
@end

