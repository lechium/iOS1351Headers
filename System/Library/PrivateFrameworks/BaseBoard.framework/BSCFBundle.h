/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, April 30, 2021 at 11:34:53 AM Mountain Standard Time
                       * Operating System: Version 13.5.1 (Build 17F80)
                       * Image Source: /System/Library/PrivateFrameworks/BaseBoard.framework/BaseBoard
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


#import <BaseBoard/BaseBoard-Structs.h>
@interface BSCFBundle : NSObject {

	CFBundleRef _cfBundle;

}
-(void)dealloc;
-(id)description;
-(id)initWithURL:(id)arg1 ;
-(id)bundleIdentifier;
-(id)initWithPath:(id)arg1 ;
-(id)infoDictionary;
-(id)localizedInfoDictionary;
-(id)bundlePath;
-(id)pathForResource:(id)arg1 ofType:(id)arg2 inDirectory:(id)arg3 ;
-(id)pathForResource:(id)arg1 ofType:(id)arg2 ;
-(id)localizedStringForKey:(id)arg1 value:(id)arg2 table:(id)arg3 ;
-(id)executablePath;
-(id)_initWithCFBundle:(CFBundleRef)arg1 ;
-(id)_pathsForResource:(id)arg1 ofType:(id)arg2 inDirectory:(id)arg3 ;
-(CFBundleRef)cfBundle;
@end

