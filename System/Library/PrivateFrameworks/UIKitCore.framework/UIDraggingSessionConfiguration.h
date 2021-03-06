/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, April 30, 2021 at 11:35:13 AM Mountain Standard Time
                       * Operating System: Version 13.5.1 (Build 17F80)
                       * Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <UIKitCore/UIKitCore-Structs.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSArray, UIDraggingSystemTouchRoutingPolicy, PBItemCollection, NSXPCListenerEndpoint, NSString;

@interface UIDraggingSessionConfiguration : NSObject <NSSecureCoding> {

	BOOL _supportsSystemDrag;
	BOOL _initiatedWithPointer;
	unsigned _coordinateSpaceSourceContextID;
	NSArray* _touchIDs;
	unsigned long long _coordinateSpaceSourceLayerRenderID;
	UIDraggingSystemTouchRoutingPolicy* _routingPolicy;
	PBItemCollection* _itemCollection;
	NSXPCListenerEndpoint* _dataProviderEndpoint;
	NSXPCListenerEndpoint* _axEndpoint;
	NSString* _sceneIdentifier;
	CGPoint _initialCentroid;

}

@property (nonatomic,retain) NSArray * touchIDs;                                                 //@synthesize touchIDs=_touchIDs - In the implementation block
@property (assign,nonatomic) CGPoint initialCentroid;                                            //@synthesize initialCentroid=_initialCentroid - In the implementation block
@property (nonatomic,retain) UIDraggingSystemTouchRoutingPolicy * routingPolicy;                 //@synthesize routingPolicy=_routingPolicy - In the implementation block
@property (nonatomic,retain) NSXPCListenerEndpoint * axEndpoint;                                 //@synthesize axEndpoint=_axEndpoint - In the implementation block
@property (assign,nonatomic) unsigned coordinateSpaceSourceContextID;                            //@synthesize coordinateSpaceSourceContextID=_coordinateSpaceSourceContextID - In the implementation block
@property (assign,nonatomic) unsigned long long coordinateSpaceSourceLayerRenderID;              //@synthesize coordinateSpaceSourceLayerRenderID=_coordinateSpaceSourceLayerRenderID - In the implementation block
@property (nonatomic,retain) PBItemCollection * itemCollection;                                  //@synthesize itemCollection=_itemCollection - In the implementation block
@property (nonatomic,retain) NSXPCListenerEndpoint * dataProviderEndpoint;                       //@synthesize dataProviderEndpoint=_dataProviderEndpoint - In the implementation block
@property (assign,nonatomic) BOOL supportsSystemDrag;                                            //@synthesize supportsSystemDrag=_supportsSystemDrag - In the implementation block
@property (nonatomic,retain) NSString * sceneIdentifier;                                         //@synthesize sceneIdentifier=_sceneIdentifier - In the implementation block
@property (assign,nonatomic) BOOL initiatedWithPointer;                                          //@synthesize initiatedWithPointer=_initiatedWithPointer - In the implementation block
+(BOOL)supportsSecureCoding;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(unsigned)coordinateSpaceSourceContextID;
-(void)setCoordinateSpaceSourceContextID:(unsigned)arg1 ;
-(unsigned long long)coordinateSpaceSourceLayerRenderID;
-(void)setCoordinateSpaceSourceLayerRenderID:(unsigned long long)arg1 ;
-(void)setSupportsSystemDrag:(BOOL)arg1 ;
-(BOOL)initiatedWithPointer;
-(UIDraggingSystemTouchRoutingPolicy *)routingPolicy;
-(NSArray *)touchIDs;
-(NSXPCListenerEndpoint *)axEndpoint;
-(void)setItemCollection:(PBItemCollection *)arg1 ;
-(void)setDataProviderEndpoint:(NSXPCListenerEndpoint *)arg1 ;
-(PBItemCollection *)itemCollection;
-(NSString *)sceneIdentifier;
-(void)setSceneIdentifier:(NSString *)arg1 ;
-(CGPoint)initialCentroid;
-(NSXPCListenerEndpoint *)dataProviderEndpoint;
-(BOOL)supportsSystemDrag;
-(void)setTouchIDs:(NSArray *)arg1 ;
-(void)setInitialCentroid:(CGPoint)arg1 ;
-(void)setRoutingPolicy:(UIDraggingSystemTouchRoutingPolicy *)arg1 ;
-(void)setAxEndpoint:(NSXPCListenerEndpoint *)arg1 ;
-(void)setInitiatedWithPointer:(BOOL)arg1 ;
@end

