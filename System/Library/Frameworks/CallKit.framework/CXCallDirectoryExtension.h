/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, April 30, 2021 at 11:36:25 AM Mountain Standard Time
                       * Operating System: Version 13.5.1 (Build 17F80)
                       * Image Source: /System/Library/Frameworks/CallKit.framework/CallKit
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSString, LSPlugInKitProxy;

@interface CXCallDirectoryExtension : NSObject <NSSecureCoding> {

	BOOL _onlyExtensionInContainingApp;
	NSString* _identifier;
	long long _state;
	long long _priority;
	NSString* _localizedName;
	NSString* _localizedContainingAppName;
	LSPlugInKitProxy* _plugInKitProxy;

}

@property (nonatomic,copy) NSString * identifier;                                                                  //@synthesize identifier=_identifier - In the implementation block
@property (assign,nonatomic) long long state;                                                                      //@synthesize state=_state - In the implementation block
@property (assign,nonatomic) long long priority;                                                                   //@synthesize priority=_priority - In the implementation block
@property (nonatomic,copy) NSString * localizedName;                                                               //@synthesize localizedName=_localizedName - In the implementation block
@property (nonatomic,copy) NSString * localizedContainingAppName;                                                  //@synthesize localizedContainingAppName=_localizedContainingAppName - In the implementation block
@property (nonatomic,retain) LSPlugInKitProxy * plugInKitProxy;                                                    //@synthesize plugInKitProxy=_plugInKitProxy - In the implementation block
@property (assign,getter=isOnlyExtensionInContainingApp,nonatomic) BOOL onlyExtensionInContainingApp;              //@synthesize onlyExtensionInContainingApp=_onlyExtensionInContainingApp - In the implementation block
+(BOOL)supportsSecureCoding;
-(id)description;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(NSString *)identifier;
-(void)setIdentifier:(NSString *)arg1 ;
-(long long)state;
-(NSString *)localizedName;
-(long long)priority;
-(void)setPriority:(long long)arg1 ;
-(void)setState:(long long)arg1 ;
-(void)setLocalizedName:(NSString *)arg1 ;
-(NSString *)localizedContainingAppName;
-(LSPlugInKitProxy *)plugInKitProxy;
-(BOOL)isOnlyExtensionInContainingApp;
-(void)setLocalizedContainingAppName:(NSString *)arg1 ;
-(void)setPlugInKitProxy:(LSPlugInKitProxy *)arg1 ;
-(void)setOnlyExtensionInContainingApp:(BOOL)arg1 ;
@end

