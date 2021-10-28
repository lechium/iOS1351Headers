/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, October 27, 2021 at 3:16:35 PM Mountain Standard Time
                       * Operating System: Version 13.5.1 (Build 17F80)
                       * Image Source: /System/Library/Frameworks/ARKit.framework/ARKit
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSArray, NSDictionary;

@interface ARFaceData : NSObject <NSSecureCoding> {

	BOOL _mirrored;
	NSArray* _detectedFaces;
	NSDictionary* _faceMeshPayload;

}

@property (nonatomic,retain) NSArray * detectedFaces;                      //@synthesize detectedFaces=_detectedFaces - In the implementation block
@property (nonatomic,retain) NSDictionary * faceMeshPayload;               //@synthesize faceMeshPayload=_faceMeshPayload - In the implementation block
@property (assign,getter=isMirrored,nonatomic) BOOL mirrored;              //@synthesize mirrored=_mirrored - In the implementation block
+(BOOL)supportsSecureCoding;
-(id)init;
-(BOOL)isEqual:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(BOOL)isMirrored;
-(void)setMirrored:(BOOL)arg1 ;
-(NSArray *)detectedFaces;
-(void)setDetectedFaces:(NSArray *)arg1 ;
-(id)initWithMetadataObjects:(id)arg1 mirroredVideoInput:(BOOL)arg2 stripDetectionData:(BOOL)arg3 ;
-(NSDictionary *)faceMeshPayload;
-(void)setFaceMeshPayload:(NSDictionary *)arg1 ;
@end
