//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "NSCopying.h"

@class SPScenario;

@interface SPOnboardingScenarios : NSObject <NSCopying>
{
    SPScenario *_loadingScenario;
    SPScenario *_loopScenario;
    SPScenario *_friendScenario;
}

@property(readonly, nonatomic) SPScenario *friendScenario; // @synthesize friendScenario=_friendScenario;
@property(readonly, nonatomic) SPScenario *loopScenario; // @synthesize loopScenario=_loopScenario;
@property(readonly, nonatomic) SPScenario *loadingScenario; // @synthesize loadingScenario=_loadingScenario;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)initWithLoadingScenario:(id)arg1 loopScenario:(id)arg2 friendScenario:(id)arg3;
- (id)initWithDictionary:(id)arg1;

@end
