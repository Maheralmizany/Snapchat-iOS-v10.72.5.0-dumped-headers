//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "MLFeatureProvider.h"

@class NSMutableDictionary, NSSet;

@interface CoreMLWrapperFeatureProvider : NSObject <MLFeatureProvider>
{
    NSMutableDictionary *_multiArrayDictionary;
    NSSet *_featureNames;
}

@property(retain, nonatomic) NSSet *featureNames; // @synthesize featureNames=_featureNames;
@property(retain, nonatomic) NSMutableDictionary *multiArrayDictionary; // @synthesize multiArrayDictionary=_multiArrayDictionary;
- (void).cxx_destruct;
- (id)featureValueForName:(id)arg1;
- (id)initWithMultiArrayDictionary:(id)arg1;
- (id)initWithFeatureNames:(id)arg1;

@end
