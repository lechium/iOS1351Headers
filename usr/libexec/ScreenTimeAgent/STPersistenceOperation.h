//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "STOperation.h"

@protocol STPersistenceControllerProtocol;

@interface STPersistenceOperation : STOperation
{
    id <STPersistenceControllerProtocol> _persistenceController;	// 8 = 0x8
}

- (void).cxx_destruct;	// IMP=0x0000000100029a84
@property(retain, nonatomic) id <STPersistenceControllerProtocol> persistenceController; // @synthesize persistenceController=_persistenceController;
- (id)initWithPersistenceController:(id)arg1;	// IMP=0x00000001000299e0

@end

