/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, October 27, 2021 at 3:18:13 PM Mountain Standard Time
                       * Operating System: Version 13.5.1 (Build 17F80)
                       * Image Source: /System/Library/PrivateFrameworks/MediaMiningKit.framework/MediaMiningKit
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@class NSMutableDictionary;

@interface CLSSceneMatcher : NSObject {

	NSMutableDictionary* _confidenceThresholdBySceneIdentifierBySceneLabel;

}
+(id)confidenceThresholdTypeBySceneLabel;
+(id)sceneNameBySceneLabel;
+(id)sharedSceneMatcher;
+(id)junkSceneNames;
+(id)junkSceneNamesLegacy;
+(id)babyChildTeenAdultAndPetSceneNames;
+(id)babyAndPetSceneNames;
+(id)childTeenAndAdultSceneNames;
+(id)interestingSceneNames;
+(id)whiteboardSceneNames;
-(id)confidenceThresholdBySceneIdentifierForSceneLabel:(id)arg1 ;
@end
