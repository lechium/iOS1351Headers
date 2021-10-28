/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, October 27, 2021 at 3:17:40 PM Mountain Standard Time
                       * Operating System: Version 13.5.1 (Build 17F80)
                       * Image Source: /System/Library/PrivateFrameworks/VideoProcessing.framework/VideoProcessing
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <VideoProcessing/VideoProcessing-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/VCPProtoResultLegacyConversionProtocol.h>
#import <libobjc.A.dylib/NSCopying.h>

@class VCPProtoBounds;

@interface VCPProtoImageFaceResult : PBCodable <VCPProtoResultLegacyConversionProtocol, NSCopying> {

	VCPProtoBounds* _bounds;
	int _eyeExpression;
	float _faceQuality;
	int _mouthExpression;
	int _position;
	int _yaw;
	BOOL _isCloseup;
	SCD_Struct_VC44 _has;

}

@property (assign,nonatomic) int eyeExpression;                    //@synthesize eyeExpression=_eyeExpression - In the implementation block
@property (assign,nonatomic) int mouthExpression;                  //@synthesize mouthExpression=_mouthExpression - In the implementation block
@property (assign,nonatomic) int yaw;                              //@synthesize yaw=_yaw - In the implementation block
@property (assign,nonatomic) int position;                         //@synthesize position=_position - In the implementation block
@property (nonatomic,retain) VCPProtoBounds * bounds;              //@synthesize bounds=_bounds - In the implementation block
@property (assign,nonatomic) BOOL isCloseup;                       //@synthesize isCloseup=_isCloseup - In the implementation block
@property (assign,nonatomic) BOOL hasFaceQuality; 
@property (assign,nonatomic) float faceQuality;                    //@synthesize faceQuality=_faceQuality - In the implementation block
+(id)resultFromLegacyDictionary:(id)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)dictionaryRepresentation;
-(int)position;
-(void)writeTo:(id)arg1 ;
-(VCPProtoBounds *)bounds;
-(void)setBounds:(VCPProtoBounds *)arg1 ;
-(int)yaw;
-(void)setYaw:(int)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(BOOL)readFrom:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(void)setPosition:(int)arg1 ;
-(float)faceQuality;
-(void)setFaceQuality:(float)arg1 ;
-(id)exportToLegacyDictionary;
-(void)setHasFaceQuality:(BOOL)arg1 ;
-(BOOL)hasFaceQuality;
-(int)eyeExpression;
-(void)setEyeExpression:(int)arg1 ;
-(int)mouthExpression;
-(void)setMouthExpression:(int)arg1 ;
-(BOOL)isCloseup;
-(void)setIsCloseup:(BOOL)arg1 ;
@end
