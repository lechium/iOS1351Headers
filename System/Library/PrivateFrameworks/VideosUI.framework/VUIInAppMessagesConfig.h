/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, October 27, 2021 at 3:23:04 PM Mountain Standard Time
                       * Operating System: Version 13.5.1 (Build 17F80)
                       * Image Source: /System/Library/PrivateFrameworks/VideosUI.framework/VideosUI
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@class NSArray;

@interface VUIInAppMessagesConfig : NSObject {

	double _minimumPresentationIntervalNormal;
	double _minimumPresentationIntervalRestricted;
	NSArray* _whitelistedFields;

}

@property (assign,nonatomic) double minimumPresentationIntervalNormal;                  //@synthesize minimumPresentationIntervalNormal=_minimumPresentationIntervalNormal - In the implementation block
@property (assign,nonatomic) double minimumPresentationIntervalRestricted;              //@synthesize minimumPresentationIntervalRestricted=_minimumPresentationIntervalRestricted - In the implementation block
@property (nonatomic,retain) NSArray * whitelistedFields;                               //@synthesize whitelistedFields=_whitelistedFields - In the implementation block
-(id)init;
-(NSArray *)whitelistedFields;
-(double)minimumPresentationIntervalNormal;
-(double)minimumPresentationIntervalRestricted;
-(void)setMinimumPresentationIntervalNormal:(double)arg1 ;
-(void)setMinimumPresentationIntervalRestricted:(double)arg1 ;
-(void)setWhitelistedFields:(NSArray *)arg1 ;
@end

