/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, October 27, 2021 at 3:16:35 PM Mountain Standard Time
                       * Operating System: Version 13.5.1 (Build 17F80)
                       * Image Source: /System/Library/Frameworks/ARKit.framework/ARKit
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <ARKit/ARSensorData.h>

@class PRCollaborationData, PRPeer, NSString;

@interface ARProximityCollaborationData : NSObject <ARSensorData> {

	double timestamp;
	PRCollaborationData* _collaborationData;
	PRPeer* _peer;

}

@property (nonatomic,readonly) PRCollaborationData * collaborationData;              //@synthesize collaborationData=_collaborationData - In the implementation block
@property (nonatomic,readonly) PRPeer * peer;                                        //@synthesize peer=_peer - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (assign,nonatomic) double timestamp; 
-(double)timestamp;
-(void)setTimestamp:(double)arg1 ;
-(PRPeer *)peer;
-(id)initWithPRCollaborationData:(id)arg1 peer:(id)arg2 ;
-(PRCollaborationData *)collaborationData;
@end

