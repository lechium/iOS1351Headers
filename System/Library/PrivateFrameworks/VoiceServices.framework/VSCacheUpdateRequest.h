/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, October 27, 2021 at 3:17:04 PM Mountain Standard Time
                       * Operating System: Version 13.5.1 (Build 17F80)
                       * Image Source: /System/Library/PrivateFrameworks/VoiceServices.framework/VoiceServices
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@class NSString;

@interface VSCacheUpdateRequest : NSObject {

	NSString* _modelID;
	NSString* _classID;

}
-(void)dealloc;
-(id)description;
-(id)modelIdentifier;
-(id)classIdentifier;
-(id)initWithModelIdentifier:(id)arg1 classIdentifier:(id)arg2 ;
-(id)coalescedRequest:(id)arg1 ;
@end

