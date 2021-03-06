/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, April 30, 2021 at 11:37:01 AM Mountain Standard Time
                       * Operating System: Version 13.5.1 (Build 17F80)
                       * Image Source: /System/Library/PrivateFrameworks/MediaRemote.framework/MediaRemote
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@class NSString, NSData, _MRPlaybackSessionProtobuf;

@interface MRPlaybackSession : NSObject {

	NSString* _identifier;
	NSString* _type;
	NSData* _playbackSessionData;

}

@property (nonatomic,readonly) _MRPlaybackSessionProtobuf * protobuf; 
@property (nonatomic,copy,readonly) NSData * data; 
@property (nonatomic,copy,readonly) NSString * identifier;                         //@synthesize identifier=_identifier - In the implementation block
@property (nonatomic,copy,readonly) NSString * type;                               //@synthesize type=_type - In the implementation block
@property (nonatomic,copy,readonly) NSData * playbackSessionData;                  //@synthesize playbackSessionData=_playbackSessionData - In the implementation block
-(NSString *)type;
-(id)initWithData:(id)arg1 ;
-(NSData *)data;
-(NSString *)identifier;
-(_MRPlaybackSessionProtobuf *)protobuf;
-(id)initWithProtobuf:(id)arg1 ;
-(NSData *)playbackSessionData;
-(id)initWithIdentifier:(id)arg1 type:(id)arg2 playbackSessionData:(id)arg3 ;
@end

