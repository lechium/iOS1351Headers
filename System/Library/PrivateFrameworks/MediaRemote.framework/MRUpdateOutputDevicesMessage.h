/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, April 30, 2021 at 11:37:01 AM Mountain Standard Time
                       * Operating System: Version 13.5.1 (Build 17F80)
                       * Image Source: /System/Library/PrivateFrameworks/MediaRemote.framework/MediaRemote
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <MediaRemote/MRProtocolMessage.h>

@class NSArray;

@interface MRUpdateOutputDevicesMessage : MRProtocolMessage {

	NSArray* _outputDevices;

}

@property (nonatomic,readonly) NSArray * outputDevices; 
-(unsigned long long)type;
-(NSArray *)outputDevices;
-(id)initWithOutputDevices:(id)arg1 ;
@end
