//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "MLFeatureProvider.h"

@class MLMultiArray, NSSet;

@interface EyesSegmentationNNInput : NSObject <MLFeatureProvider>
{
    MLMultiArray *_eyes;
}

@property(retain, nonatomic) MLMultiArray *eyes; // @synthesize eyes=_eyes;
- (void).cxx_destruct;
- (id)featureValueForName:(id)arg1;
@property(readonly, nonatomic) NSSet *featureNames;
- (id)initWithEyes:(id)arg1;

@end
