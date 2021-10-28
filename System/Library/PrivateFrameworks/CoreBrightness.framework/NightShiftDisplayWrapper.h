/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, April 30, 2021 at 11:37:33 AM Mountain Standard Time
                       * Operating System: Version 13.5.1 (Build 17F80)
                       * Image Source: /System/Library/PrivateFrameworks/CoreBrightness.framework/CoreBrightness
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <CoreBrightness/CoreBrightness-Structs.h>
#import <libobjc.A.dylib/NightShiftSupportProtocol.h>

@protocol CBContainerProtocol;
@class NSString;

@interface NightShiftDisplayWrapper : NSObject <NightShiftSupportProtocol> {

	DisplayRef _display;
	id<CBContainerProtocol> _container;

}

@property (retain) id<CBContainerProtocol> container;               //@synthesize container=_container - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)init;
-(void)dealloc;
-(id<CBContainerProtocol>)container;
-(void)setContainer:(id<CBContainerProtocol>)arg1 ;
-(id)initWithDisplay:(DisplayRef)arg1 ;
-(void)setNightShiftFactorDictionary:(id)arg1 ;
-(id)copyPreferenceForKey:(id)arg1 user:(id)arg2 ;
-(void)setPreference:(id)arg1 forKey:(id)arg2 user:(id)arg3 ;
@end
