/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, April 30, 2021 at 11:37:11 AM Mountain Standard Time
                       * Operating System: Version 13.5.1 (Build 17F80)
                       * Image Source: /System/Library/Frameworks/FileProvider.framework/FileProvider
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


#import <FileProvider/FileProvider-Structs.h>
@class NSProgress, NSMutableDictionary;

@interface _FPCopyFileStatus : NSObject {

	NSProgress* _progress;
	NSMutableDictionary* _lastBytesCopiedByFile;

}

@property (retain) NSProgress * progress;                                    //@synthesize progress=_progress - In the implementation block
@property (retain) NSMutableDictionary * lastBytesCopiedByFile;              //@synthesize lastBytesCopiedByFile=_lastBytesCopiedByFile - In the implementation block
-(id)init;
-(NSProgress *)progress;
-(void)setProgress:(NSProgress *)arg1 ;
-(void)updateCopyingFile:(id)arg1 state:(copyfile_stateRef)arg2 ;
-(void)beginCopyingFile:(id)arg1 state:(copyfile_stateRef)arg2 ;
-(void)finishCopyingFile:(id)arg1 state:(copyfile_stateRef)arg2 ;
-(NSMutableDictionary *)lastBytesCopiedByFile;
-(void)setLastBytesCopiedByFile:(NSMutableDictionary *)arg1 ;
@end
