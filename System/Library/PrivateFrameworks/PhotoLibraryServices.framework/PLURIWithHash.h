/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, April 30, 2021 at 11:36:00 AM Mountain Standard Time
                       * Operating System: Version 13.5.1 (Build 17F80)
                       * Image Source: /System/Library/PrivateFrameworks/PhotoLibraryServices.framework/PhotoLibraryServices
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@protocol OS_xpc_object;
@class NSObject;

@interface PLURIWithHash : NSObject {

	NSObject*<OS_xpc_object> _uri;
	unsigned long long _uriHash;

}

@property (nonatomic,retain) NSObject*<OS_xpc_object> uri;              //@synthesize uri=_uri - In the implementation block
@property (assign,nonatomic) unsigned long long uriHash;                //@synthesize uriHash=_uriHash - In the implementation block
-(id)init;
-(NSObject*<OS_xpc_object>)uri;
-(id)initWithXPCURI:(id)arg1 ;
-(void)setUri:(NSObject*<OS_xpc_object>)arg1 ;
-(unsigned long long)uriHash;
-(void)setUriHash:(unsigned long long)arg1 ;
@end
