//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "SCNConfigConfigurationMarshaller.h"

@class SCCircumstanceEngineConfiguration;

@interface SCCircumstanceEngineConfigurationMashaller : NSObject <SCNConfigConfigurationMarshaller>
{
    SCCircumstanceEngineConfiguration *_cofConfiguration;
}

- (void).cxx_destruct;
- (id)getIntegerValue:(id)arg1;
- (id)getBooleanValue:(id)arg1;
- (id)getBinaryValue:(id)arg1;
- (id)getStringValue:(id)arg1;
- (id)getRealValue:(id)arg1;
- (long long)getSystemType;
- (id)initWithConfiguration:(id)arg1;

@end

