/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, October 27, 2021 at 3:16:39 PM Mountain Standard Time
                       * Operating System: Version 13.5.1 (Build 17F80)
                       * Image Source: /System/Library/PrivateFrameworks/CoreSuggestionsInternals.framework/CoreSuggestionsInternals
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@protocol PMLTrainingProtocol;
@interface SGDetectedAttributeML : NSObject {

	id<PMLTrainingProtocol> _localTraining;

}
-(id)init;
-(id)initWithTraining:(id)arg1 ;
-(void)addSessionForTrainingWithSource:(id)arg1 label:(long long)arg2 language:(id)arg3 objective:(unsigned long long)arg4 spotlightRef:(id)arg5 embeddedFeaturizer:(/*^block*/id)arg6 ;
-(id)detectionFromEntity:(id)arg1 ddMatch:(id)arg2 matchedContext:(id)arg3 withSupervision:(id)arg4 inConversation:(id)arg5 entityLanguage:(id)arg6 ;
-(id)detectionFromMatch:(id)arg1 plainTextContent:(id)arg2 extractionInfo:(id)arg3 isUnlikelyPhone:(BOOL)arg4 ;
-(id)selfIdDetectionWithEntity:(id)arg1 inConversation:(id)arg2 withSupervision:(id)arg3 ;
-(void)handleTextMessageContactSharing:(id)arg1 andMatch:(id)arg2 andContext:(id)arg3 andLanguage:(id)arg4 withSupervision:(id)arg5 ;
-(id)birthdayCongratsTextMessage:(id)arg1 andLanguage:(id)arg2 andHealthStore:(id)arg3 ;
-(void)handleTextMessageContactSharingWithNegativeSample:(id)arg1 andLanguage:(id)arg2 ;
@end
