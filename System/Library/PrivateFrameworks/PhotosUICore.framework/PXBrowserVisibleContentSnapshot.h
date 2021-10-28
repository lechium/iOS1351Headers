/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, October 27, 2021 at 3:16:27 PM Mountain Standard Time
                       * Operating System: Version 13.5.1 (Build 17F80)
                       * Image Source: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

@class NSDateInterval, NSArray, NSString;


@protocol PXBrowserVisibleContentSnapshot <NSObject>
@property (nonatomic,readonly) NSDateInterval * dateInterval; 
@property (nonatomic,readonly) NSArray * locationNames; 
@property (nonatomic,readonly) unsigned long long dateIntervalGranularity; 
@property (nonatomic,readonly) NSString * localizedPlaceholderText; 
@optional
-(NSString *)localizedPlaceholderText;

@required
-(NSDateInterval *)dateInterval;
-(NSArray *)locationNames;
-(unsigned long long)dateIntervalGranularity;

@end
