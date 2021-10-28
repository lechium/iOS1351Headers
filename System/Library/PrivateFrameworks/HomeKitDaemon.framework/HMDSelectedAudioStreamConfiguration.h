/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, October 27, 2021 at 3:17:24 PM Mountain Standard Time
                       * Operating System: Version 13.5.1 (Build 17F80)
                       * Image Source: /System/Library/PrivateFrameworks/HomeKitDaemon.framework/HomeKitDaemon
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <HomeKitDaemon/HomeKitDaemon-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>

@class HMDAudioStreamCodecConfiguration;

@interface HMDSelectedAudioStreamConfiguration : NSObject <NSCopying> {

	HMDAudioStreamCodecConfiguration* _configuration;

}

@property (nonatomic,retain) HMDAudioStreamCodecConfiguration * configuration;              //@synthesize configuration=_configuration - In the implementation block
+(id)parsedFromData:(id)arg1 error:(id*)arg2 ;
-(id)init;
-(BOOL)isEqual:(id)arg1 ;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)initWithConfiguration:(id)arg1 ;
-(void)setConfiguration:(HMDAudioStreamCodecConfiguration *)arg1 ;
-(HMDAudioStreamCodecConfiguration *)configuration;
-(BOOL)parseFromData:(id)arg1 error:(id*)arg2 ;
-(id)serializeWithError:(id*)arg1 ;
@end
