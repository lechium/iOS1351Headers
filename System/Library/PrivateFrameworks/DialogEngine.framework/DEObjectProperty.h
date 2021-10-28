/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, October 27, 2021 at 3:23:38 PM Mountain Standard Time
                       * Operating System: Version 13.5.1 (Build 17F80)
                       * Image Source: /System/Library/PrivateFrameworks/DialogEngine.framework/DialogEngine
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


#import <DialogEngine/DialogEngine-Structs.h>
@class NSString, NSArray;

@interface DEObjectProperty : NSObject {

	ObjectProperty* _This;
	shared_ptr<siri::dialogengine::ObjectProperty>* _ThisShared;

}

@property (assign) shared_ptr<siri::dialogengine::ObjectProperty>* ThisShared;              //@synthesize ThisShared=_ThisShared - In the implementation block
@property (assign) ObjectProperty* This;                                                    //@synthesize This=_This - In the implementation block
@property (readonly) NSString * name; 
@property (readonly) NSString * type; 
@property (readonly) NSString * description; 
@property (readonly) NSArray * sampleValueLocales; 
-(id)init;
-(NSString *)description;
-(NSString *)name;
-(NSString *)type;
-(void)setThis:(ObjectProperty*)arg1 ;
-(ObjectProperty*)This;
-(id)initWithSharedPtr:(shared_ptr<siri::dialogengine::ObjectProperty>*)arg1 ;
-(id)initWithPtr:(ObjectProperty*)arg1 ;
-(void)setThisShared:(shared_ptr<siri::dialogengine::ObjectProperty>*)arg1 ;
-(shared_ptr<siri::dialogengine::ObjectProperty>*)ThisShared;
-(id)sampleValuesForLocale:(id)arg1 ;
-(NSArray *)sampleValueLocales;
@end
