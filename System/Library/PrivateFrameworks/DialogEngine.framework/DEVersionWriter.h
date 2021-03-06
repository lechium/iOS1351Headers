/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, October 27, 2021 at 3:23:38 PM Mountain Standard Time
                       * Operating System: Version 13.5.1 (Build 17F80)
                       * Image Source: /System/Library/PrivateFrameworks/DialogEngine.framework/DialogEngine
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <DialogEngine/DialogEngine-Structs.h>
#import <libobjc.A.dylib/DEWriter.h>

@class NSData;

@interface DEVersionWriter : NSObject <DEWriter> {

	NSData* _version;
	CC_SHA256state_st _context;

}

@property (assign,nonatomic) CC_SHA256state_st context;              //@synthesize context=_context - In the implementation block
@property (nonatomic,retain) NSData * version;                       //@synthesize version=_version - In the implementation block
+(id)dataWithHexString:(id)arg1 ;
+(id)getBuildId;
+(id)versionString:(id)arg1 ;
+(id)versionToString:(id)arg1 ;
+(BOOL)prepareDirsFor:(id)arg1 ;
+(id)versionFile:(id)arg1 ;
+(id)getURLFor:(id)arg1 version:(id)arg2 base:(id)arg3 ;
+(id)versionData:(id)arg1 ;
-(id)init;
-(void)close;
-(void)writeData:(id)arg1 ;
-(NSData *)version;
-(void)setVersion:(NSData *)arg1 ;
-(CC_SHA256state_st)context;
-(void)setContext:(CC_SHA256state_st)arg1 ;
@end

