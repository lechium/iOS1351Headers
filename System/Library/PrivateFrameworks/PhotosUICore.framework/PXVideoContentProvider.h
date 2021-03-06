/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, October 27, 2021 at 3:16:26 PM Mountain Standard Time
                       * Operating System: Version 13.5.1 (Build 17F80)
                       * Image Source: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <PhotosUICore/PXObservable.h>

@class PXVideoContentProviderLoadingResult, NSString;

@interface PXVideoContentProvider : PXObservable {

	PXVideoContentProviderLoadingResult* _loadingResult;
	double _loadingProgress;
	NSString* _contentIdentifier;

}

@property (nonatomic,retain) PXVideoContentProviderLoadingResult * loadingResult;              //@synthesize loadingResult=_loadingResult - In the implementation block
@property (assign,nonatomic) double loadingProgress;                                           //@synthesize loadingProgress=_loadingProgress - In the implementation block
@property (nonatomic,copy,readonly) NSString * contentIdentifier;                              //@synthesize contentIdentifier=_contentIdentifier - In the implementation block
-(void)cancelLoading;
-(double)loadingProgress;
-(void)setLoadingProgress:(double)arg1 ;
-(NSString *)contentIdentifier;
-(id)mutableChangeObject;
-(void)beginLoadingWithPriority:(long long)arg1 ;
-(PXVideoContentProviderLoadingResult *)loadingResult;
-(void)setLoadingResult:(PXVideoContentProviderLoadingResult *)arg1 ;
@end

