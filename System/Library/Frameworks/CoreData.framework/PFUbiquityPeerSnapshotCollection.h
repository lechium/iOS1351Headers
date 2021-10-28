/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, April 30, 2021 at 11:35:21 AM Mountain Standard Time
                       * Operating System: Version 13.5.1 (Build 17F80)
                       * Image Source: /System/Library/Frameworks/CoreData.framework/CoreData
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@class NSMutableDictionary, NSMutableArray;

@interface PFUbiquityPeerSnapshotCollection : NSObject {

	NSMutableDictionary* _peerIDToTransactionNumberToSnapshot;
	NSMutableDictionary* _peerIDToTranasctionNumberToKnowledgeVector;
	NSMutableDictionary* _kvToSnapshot;
	NSMutableArray* _peerSnapshots;
	BOOL _needSort;

}
-(id)init;
-(void)dealloc;
-(void)addSnapshot:(id)arg1 ;
-(id)allPeerIDs;
-(BOOL)calculateSnapshotDiffsWithError:(id*)arg1 ;
-(id)snapshotForKnowledgeVector:(id)arg1 ;
-(id)snapshotForPeerID:(id)arg1 andTransactionNumber:(id)arg2 ;
-(id)knowledgeVectorsForTransactionNumber:(id)arg1 exportedByPeerWithID:(id)arg2 ;
@end
