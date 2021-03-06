/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, April 30, 2021 at 11:35:25 AM Mountain Standard Time
                       * Operating System: Version 13.5.1 (Build 17F80)
                       * Image Source: /System/Library/Frameworks/Network.framework/Network
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@protocol OS_nw_browser;
@class NWBrowseDescriptor, NWParameters, NSObject, NSSet;

@interface NWBrowser : NSObject {

	NWBrowseDescriptor* _descriptor;
	NWParameters* _parameters;
	NSObject*<OS_nw_browser> _internalBrowser;
	NSSet* _internalDiscoveredEndpoints;

}

@property (readonly) NSObject*<OS_nw_browser> internalBrowser;              //@synthesize internalBrowser=_internalBrowser - In the implementation block
@property (retain) NSSet * internalDiscoveredEndpoints;                     //@synthesize internalDiscoveredEndpoints=_internalDiscoveredEndpoints - In the implementation block
@property (readonly) NWBrowseDescriptor * descriptor;                       //@synthesize descriptor=_descriptor - In the implementation block
@property (readonly) NWParameters * parameters;                             //@synthesize parameters=_parameters - In the implementation block
@property (nonatomic,readonly) NSSet * discoveredEndpoints; 
+(BOOL)automaticallyNotifiesObserversForKey:(id)arg1 ;
-(void)dealloc;
-(void)cancel;
-(NWParameters *)parameters;
-(NWBrowseDescriptor *)descriptor;
-(id)initWithDescriptor:(id)arg1 parameters:(id)arg2 ;
-(NSSet *)discoveredEndpoints;
-(void)setUpdateHandler;
-(id)copyDiscoveredEndpoints;
-(NSObject*<OS_nw_browser>)internalBrowser;
-(NSSet *)internalDiscoveredEndpoints;
-(void)setInternalDiscoveredEndpoints:(NSSet *)arg1 ;
@end

