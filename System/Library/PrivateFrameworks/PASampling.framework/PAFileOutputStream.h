/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, October 27, 2021 at 3:22:44 PM Mountain Standard Time
                       * Operating System: Version 13.5.1 (Build 17F80)
                       * Image Source: /System/Library/PrivateFrameworks/PASampling.framework/PASampling
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <PASampling/PASampling-Structs.h>
#import <PASampling/PAOutputStream.h>

@interface PAFileOutputStream : PAOutputStream {

	_sFILE* _outputFileStream;

}

@property (nonatomic,readonly) _sFILE* outputFileStream;              //@synthesize outputFileStream=_outputFileStream - In the implementation block
-(int)printWithFormat:(const char*)arg1 ;
-(id)initWithFileStream:(_sFILE*)arg1 ;
-(_sFILE*)outputFileStream;
@end
