/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, October 27, 2021 at 3:22:30 PM Mountain Standard Time
                       * Operating System: Version 13.5.1 (Build 17F80)
                       * Image Source: /System/Library/PrivateFrameworks/HomeUI.framework/HomeUI
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <ShareSheet/UIActivityItemProvider.h>

@class NSURL;

@interface HUClipExporterItemProvider : UIActivityItemProvider {

	NSURL* _clipURL;

}

@property (nonatomic,retain) NSURL * clipURL;              //@synthesize clipURL=_clipURL - In the implementation block
-(id)initWithURL:(id)arg1 ;
-(id)item;
-(id)activityViewController:(id)arg1 subjectForActivityType:(id)arg2 ;
-(id)activityViewController:(id)arg1 dataTypeIdentifierForActivityType:(id)arg2 ;
-(NSURL *)clipURL;
-(void)setClipURL:(NSURL *)arg1 ;
@end

