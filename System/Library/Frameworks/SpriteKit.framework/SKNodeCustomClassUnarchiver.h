/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, April 30, 2021 at 11:37:52 AM Mountain Standard Time
                       * Operating System: Version 13.5.1 (Build 17F80)
                       * Image Source: /System/Library/Frameworks/SpriteKit.framework/SpriteKit
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <libobjc.A.dylib/NSKeyedUnarchiverDelegate.h>

@class NSMutableDictionary, NSString;

@interface SKNodeCustomClassUnarchiver : NSObject <NSKeyedUnarchiverDelegate> {

	NSMutableDictionary* _cache;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)init;
-(Class)unarchiver:(id)arg1 cannotDecodeObjectOfClassName:(id)arg2 originalClasses:(id)arg3 ;
-(id)_currentAppModuleName;
-(id)_mangledSwiftClassName:(id)arg1 moduleName:(id)arg2 ;
-(id)_findValidClassName:(id)arg1 ;
@end

