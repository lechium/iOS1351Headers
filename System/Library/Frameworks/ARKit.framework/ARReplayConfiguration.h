/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, October 27, 2021 at 3:16:36 PM Mountain Standard Time
                       * Operating System: Version 13.5.1 (Build 17F80)
                       * Image Source: /System/Library/Frameworks/ARKit.framework/ARKit
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <ARKit/ARKit-Structs.h>
#import <ARKit/ARCustomTechniquesConfiguration.h>
#import <ARKit/ARReplaySensorDelegate.h>

@protocol ARReplaySensorProtocol, ARReplayConfigurationDelegate;
@class NSNumber, NSURL, NSString;

@interface ARReplayConfiguration : ARCustomTechniquesConfiguration <ARReplaySensorDelegate> {

	id<ARReplaySensorProtocol> _replaySensor;
	NSNumber* _vioSessionID;
	NSURL* _fileURL;
	id<ARReplayConfigurationDelegate> _delegate;

}

@property (nonatomic,readonly) NSURL * fileURL;                                              //@synthesize fileURL=_fileURL - In the implementation block
@property (assign,nonatomic,__weak) id<ARReplayConfigurationDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(BOOL)supportsFrameSemantics:(unsigned long long)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(NSString *)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id<ARReplayConfigurationDelegate>)delegate;
-(void)setDelegate:(id<ARReplayConfigurationDelegate>)arg1 ;
-(void)pause;
-(NSURL *)fileURL;
-(void)play;
-(id)initPrivate;
-(long long)worldAlignment;
-(id)parentImageSensorSettings;
-(id)imageSensorSettings;
-(id)secondaryTechniques;
-(id)imageSensorSettingsForUltraWide;
-(id)initWithBaseConfiguration:(id)arg1 replaySensor:(id)arg2 replayingResultDataClasses:(id)arg3 ;
-(void)replaySensorDidFinishReplayingData;
-(void)ensureTechniqueAndCustomSensorCompatibility;
-(id)initWithBaseConfiguration:(id)arg1 fileURL:(id)arg2 replayMode:(long long)arg3 outError:(id*)arg4 ;
-(id)initWithBaseConfiguration:(id)arg1 fileURL:(id)arg2 outError:(id*)arg3 ;
@end
