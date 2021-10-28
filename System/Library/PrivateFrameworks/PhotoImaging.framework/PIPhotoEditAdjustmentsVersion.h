/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, October 27, 2021 at 3:22:44 PM Mountain Standard Time
                       * Operating System: Version 13.5.1 (Build 17F80)
                       * Image Source: /System/Library/PrivateFrameworks/PhotoImaging.framework/PhotoImaging
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@class NSString;

@interface PIPhotoEditAdjustmentsVersion : NSObject {

	unsigned long long _majorVersion;
	unsigned long long _minorVersion;
	unsigned long long _subMinorVersion;
	NSString* _platform;

}

@property (nonatomic,__weak,readonly) NSString * string; 
@property (nonatomic,readonly) unsigned long long majorVersion;                 //@synthesize majorVersion=_majorVersion - In the implementation block
@property (nonatomic,readonly) unsigned long long minorVersion;                 //@synthesize minorVersion=_minorVersion - In the implementation block
@property (nonatomic,readonly) unsigned long long subMinorVersion;              //@synthesize subMinorVersion=_subMinorVersion - In the implementation block
@property (nonatomic,copy,readonly) NSString * platform;                        //@synthesize platform=_platform - In the implementation block
+(id)versionFromString:(id)arg1 ;
+(id)versionWithMajor:(unsigned long long)arg1 minor:(unsigned long long)arg2 subMinor:(unsigned long long)arg3 platform:(id)arg4 ;
-(id)init;
-(NSString *)string;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(long long)compare:(id)arg1 ;
-(NSString *)platform;
-(unsigned long long)majorVersion;
-(unsigned long long)minorVersion;
-(BOOL)isEqualToAdjustmentVersion:(id)arg1 ;
-(id)initWithMajor:(unsigned long long)arg1 minor:(unsigned long long)arg2 subMinor:(unsigned long long)arg3 platform:(id)arg4 ;
-(id)initWithMajor:(unsigned long long)arg1 minor:(unsigned long long)arg2 subMinor:(unsigned long long)arg3 ;
-(long long)asOrderedInteger;
-(unsigned long long)subMinorVersion;
@end
