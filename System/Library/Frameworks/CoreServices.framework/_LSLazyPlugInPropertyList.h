/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, April 30, 2021 at 11:33:14 AM Mountain Standard Time
                       * Operating System: Version 13.5.1 (Build 17F80)
                       * Image Source: /System/Library/Frameworks/CoreServices.framework/CoreServices
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <CoreServices/CoreServices-Structs.h>
#import <CoreServices/_LSLazyPropertyList.h>

@class _LSLazyPropertyList, NSDictionary;

@interface _LSLazyPlugInPropertyList : _LSLazyPropertyList {

	_LSLazyPropertyList* _infoPlist;
	_LSLazyPropertyList* _sdkPlist;
	NSDictionary* _mergedPlist;
	os_unfair_lock_s _mergeLock;

}
+(BOOL)supportsSecureCoding;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(id)initWithInfoPlist:(id)arg1 SDKPlist:(id)arg2 ;
-(BOOL)_getPropertyList:(id*)arg1 ;
-(BOOL)_getValue:(id*)arg1 forPropertyListKey:(id)arg2 ;
@end
