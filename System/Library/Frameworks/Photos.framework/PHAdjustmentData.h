/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, April 30, 2021 at 11:36:04 AM Mountain Standard Time
                       * Operating System: Version 13.5.1 (Build 17F80)
                       * Image Source: /System/Library/Frameworks/Photos.framework/Photos
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSString, NSData;

@interface PHAdjustmentData : NSObject <NSSecureCoding> {

	NSString* _formatIdentifier;
	NSString* _formatVersion;
	NSData* _data;
	long long _baseVersion;

}

@property (getter=isOpaque,readonly) BOOL opaque; 
@property (nonatomic,copy) NSString * formatIdentifier;              //@synthesize formatIdentifier=_formatIdentifier - In the implementation block
@property (nonatomic,copy) NSString * formatVersion;                 //@synthesize formatVersion=_formatVersion - In the implementation block
@property (assign,nonatomic) long long baseVersion;                  //@synthesize baseVersion=_baseVersion - In the implementation block
@property (readonly) NSData * data;                                  //@synthesize data=_data - In the implementation block
+(BOOL)supportsSecureCoding;
+(id)opaqueAdjustmentData;
+(long long)imageRequestVersionFromAdjustmentBaseVersion:(long long)arg1 ;
+(long long)adjustmentBaseVersionFromImageRequestVersion:(long long)arg1 ;
+(long long)videoRequestVersionFromAdjustmentBaseVersion:(long long)arg1 ;
+(long long)adjustmentBaseVersionFromVideoRequestVersion:(long long)arg1 ;
-(id)description;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(NSData *)data;
-(BOOL)isOpaque;
-(long long)baseVersion;
-(void)setBaseVersion:(long long)arg1 ;
-(NSString *)formatVersion;
-(void)setFormatVersion:(NSString *)arg1 ;
-(NSString *)formatIdentifier;
-(BOOL)_hasAdjustments;
-(id)initWithFormatIdentifier:(id)arg1 formatVersion:(id)arg2 data:(id)arg3 ;
-(void)setFormatIdentifier:(NSString *)arg1 ;
-(long long)_requiredBaseVersionWithCanHandleAdjustmentData:(BOOL)arg1 assetIsVideo:(BOOL)arg2 ;
-(BOOL)_canBeHandledByClientUsingVerificationBlock:(/*^block*/id)arg1 ;
-(BOOL)_contentEditingHasAdjustments;
@end

