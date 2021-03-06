/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, April 30, 2021 at 11:36:09 AM Mountain Standard Time
                       * Operating System: Version 13.5.1 (Build 17F80)
                       * Image Source: /System/Library/Frameworks/Intents.framework/Intents
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <Intents/Intents-Structs.h>
#import <libobjc.A.dylib/INKeyImageProducing.h>
#import <libobjc.A.dylib/INImageProxyInjecting.h>
#import <libobjc.A.dylib/NSSecureCoding.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSArray, INDefaultCardTemplate, INShortcut, NSString, INImage;

@interface INRelevantShortcut : NSObject <INKeyImageProducing, INImageProxyInjecting, NSSecureCoding, NSCopying> {

	NSArray* _relevanceProviders;
	INDefaultCardTemplate* _watchTemplate;
	long long _shortcutRole;
	INShortcut* _shortcut;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (readonly) INImage * _keyImage; 
@property (nonatomic,copy) INShortcut * shortcut;                              //@synthesize shortcut=_shortcut - In the implementation block
@property (nonatomic,copy) NSArray * relevanceProviders;                       //@synthesize relevanceProviders=_relevanceProviders - In the implementation block
@property (nonatomic,copy) INDefaultCardTemplate * watchTemplate;              //@synthesize watchTemplate=_watchTemplate - In the implementation block
@property (assign,nonatomic) long long shortcutRole;                           //@synthesize shortcutRole=_shortcutRole - In the implementation block
+(BOOL)supportsSecureCoding;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(INDefaultCardTemplate *)watchTemplate;
-(NSArray *)relevanceProviders;
-(INImage *)_keyImage;
-(void)_injectProxiesForImages:(/*^block*/id)arg1 completion:(/*^block*/id)arg2 ;
-(INShortcut *)shortcut;
-(void)setShortcut:(INShortcut *)arg1 ;
-(long long)_compareSubProducerOne:(id)arg1 subProducerTwo:(id)arg2 ;
-(id)initWithShortcut:(id)arg1 ;
-(void)setRelevanceProviders:(NSArray *)arg1 ;
-(void)setWatchTemplate:(INDefaultCardTemplate *)arg1 ;
-(long long)shortcutRole;
-(void)setShortcutRole:(long long)arg1 ;
@end

