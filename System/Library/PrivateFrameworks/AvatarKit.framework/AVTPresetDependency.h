/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, October 27, 2021 at 3:17:06 PM Mountain Standard Time
                       * Operating System: Version 13.5.1 (Build 17F80)
                       * Image Source: /System/Library/PrivateFrameworks/AvatarKit.framework/AvatarKit
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@class AVTPreset, NSString;

@interface AVTPresetDependency : NSObject {

	long long category;
	AVTPreset* preset;
	NSString* variantName;

}

@property (assign,nonatomic) long long category; 
@property (nonatomic,retain) AVTPreset * preset; 
@property (nonatomic,retain) NSString * variantName; 
-(id)debugDescription;
-(long long)category;
-(void)setCategory:(long long)arg1 ;
-(NSString *)variantName;
-(void)setVariantName:(NSString *)arg1 ;
-(void)setPreset:(AVTPreset *)arg1 ;
-(AVTPreset *)preset;
@end

