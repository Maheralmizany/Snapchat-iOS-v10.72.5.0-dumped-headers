//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "SCExperimentContext.h"

@interface SCContentManagerUseBoltContentObjectsExperiment : SCExperimentContext
{
    _Bool _useBoltContentObjects;
    _Bool _useStreamingRequestTypeForProgRequest;
}

@property(readonly, nonatomic) _Bool useStreamingRequestTypeForProgRequest; // @synthesize useStreamingRequestTypeForProgRequest=_useStreamingRequestTypeForProgRequest;
@property(readonly, nonatomic) _Bool useBoltContentObjects; // @synthesize useBoltContentObjects=_useBoltContentObjects;
- (void)setupParameters;
- (id)experimentName;

@end

