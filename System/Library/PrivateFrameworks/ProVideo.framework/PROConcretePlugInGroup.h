/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, October 27, 2021 at 3:22:50 PM Mountain Standard Time
                       * Operating System: Version 13.5.1 (Build 17F80)
                       * Image Source: /System/Library/PrivateFrameworks/ProVideo.framework/ProVideo
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


#import <ProVideo/ProVideo-Structs.h>
@class NSMutableArray, NSString, NSMutableDictionary, NSLock;

@interface PROConcretePlugInGroup : NSObject {

	NSMutableArray* plugIns;
	CFUUIDRef uuidRef;
	NSString* name;
	NSString* displayName;
	NSMutableDictionary* protocols;
	NSLock* mutex;

}
-(void)dealloc;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)name;
-(CFUUIDRef)uuid;
-(id)displayName;
-(id)uuidString;
-(id)plugInsForProtocols:(id)arg1 ;
-(id)plugIns;
-(void)addPlugIn:(id)arg1 ;
-(BOOL)isEqualToPlugInGroup:(id)arg1 ;
-(id)initWithUUID:(CFUUIDRef)arg1 name:(id)arg2 bundle:(id)arg3 ;
-(void)removePlugIn:(id)arg1 ;
@end
