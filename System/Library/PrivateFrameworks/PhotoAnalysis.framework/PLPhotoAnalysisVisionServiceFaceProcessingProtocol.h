/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, October 27, 2021 at 3:18:13 PM Mountain Standard Time
                       * Operating System: Version 13.5.1 (Build 17F80)
                       * Image Source: /System/Library/PrivateFrameworks/PhotoAnalysis.framework/PhotoAnalysis
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@protocol PLPhotoAnalysisVisionServiceFaceProcessingProtocol
@required
-(void)suggestPersonsForPersonWithLocalIdentifier:(id)arg1 toBeConfirmedPersonSuggestions:(id)arg2 toBeRejectedPersonSuggestions:(id)arg3 context:(id)arg4 reply:(/*^block*/id)arg5;
-(void)suggestVerifiedPersonLocalIdentifierForFaceWithLocalIdentifier:(id)arg1 context:(id)arg2 reply:(/*^block*/id)arg3;
-(void)suggestVerifiedPersonLocalIdentifierForPersonWithLocalIdentifier:(id)arg1 context:(id)arg2 reply:(/*^block*/id)arg3;
-(void)renderFaceTilesForFaceLocalIdentifiers:(id)arg1 inAssetWithLocalIdentifier:(id)arg2 context:(id)arg3 reply:(/*^block*/id)arg4;
-(void)updateKeyFacesOfPersonsWithLocalIdentifiers:(id)arg1 forceUpdate:(BOOL)arg2 context:(id)arg3 reply:(/*^block*/id)arg4;
-(void)resetFaceClusteringStateWithContext:(id)arg1 reply:(/*^block*/id)arg2;
-(void)resetPeopleWithContext:(id)arg1 reply:(/*^block*/id)arg2;
-(void)resetFaceClassificationModelWithContext:(id)arg1 reply:(/*^block*/id)arg2;
-(void)reclusterFacesWithContext:(id)arg1 reply:(/*^block*/id)arg2;
-(void)processPersonsWithContext:(id)arg1 reply:(/*^block*/id)arg2;
-(void)faceClusteringInformation:(unsigned long long)arg1 withContext:(id)arg2 reply:(/*^block*/id)arg3;
-(void)validateClusterCacheWithContext:(id)arg1 reply:(/*^block*/id)arg2;
-(void)faceProcessingStatusForUserInterfaceWithContext:(id)arg1 reply:(/*^block*/id)arg2;
-(void)requestSuggestedMePersonIdentifierWithContext:(id)arg1 reply:(/*^block*/id)arg2;
-(void)personPromoterStatusWithContext:(id)arg1 reply:(/*^block*/id)arg2;
-(void)faceCandidatesforKeyFaceForPersonsWithLocalIdentifiers:(id)arg1 context:(id)arg2 reply:(/*^block*/id)arg3;
-(void)rebuildPersonsWithContext:(id)arg1 reply:(/*^block*/id)arg2;
-(void)performFaceProcessingOnAssetWithLocalIdentifier:(id)arg1 context:(id)arg2 reply:(/*^block*/id)arg3;

@end

