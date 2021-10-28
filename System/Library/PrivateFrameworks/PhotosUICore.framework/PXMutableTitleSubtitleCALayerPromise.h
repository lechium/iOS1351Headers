/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, October 27, 2021 at 3:16:26 PM Mountain Standard Time
                       * Operating System: Version 13.5.1 (Build 17F80)
                       * Image Source: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

@class NSString, PXTitleSubtitleLabelSpec;


@protocol PXMutableTitleSubtitleCALayerPromise <PXMutableCALayerPromise>
@property (nonatomic,copy) NSString * titleText; 
@property (nonatomic,copy) NSString * subtitleText; 
@property (nonatomic,retain) PXTitleSubtitleLabelSpec * spec; 
@property (assign,nonatomic) long long typesettingMode; 
@required
-(void)setTitleText:(id)arg1;
-(void)setSpec:(id)arg1;
-(PXTitleSubtitleLabelSpec *)spec;
-(NSString *)titleText;
-(NSString *)subtitleText;
-(void)setSubtitleText:(id)arg1;
-(long long)typesettingMode;
-(void)setTypesettingMode:(long long)arg1;

@end
