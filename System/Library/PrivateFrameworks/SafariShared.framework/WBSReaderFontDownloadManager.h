/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, October 27, 2021 at 3:16:53 PM Mountain Standard Time
                       * Operating System: Version 13.5.1 (Build 17F80)
                       * Image Source: /System/Library/PrivateFrameworks/SafariShared.framework/SafariShared
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@class NSMutableDictionary;

@interface WBSReaderFontDownloadManager : NSObject {

	NSMutableDictionary* _fontFamilyToProgress;

}
+(id)sharedManager;
-(id)init;
-(void)downloadFont:(id)arg1 ;
-(double)downloadProgressForFont:(id)arg1 ;
-(BOOL)hasOngoingRequestForFont:(id)arg1 ;
@end
