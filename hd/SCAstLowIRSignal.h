//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "SCAstLowIRBase.h"

@class NSString;

@interface SCAstLowIRSignal : SCAstLowIRBase
{
    unsigned long long _signalIndex;
    float _defaultValue;
    NSString *_signalName;
}

@property(readonly, nonatomic) float defaultValue; // @synthesize defaultValue=_defaultValue;
@property(readonly, copy, nonatomic) NSString *signalName; // @synthesize signalName=_signalName;
- (void).cxx_destruct;
- (CDStruct_5074f54c)composeInstructionWithRegisters:(id)arg1;
@property(readonly, nonatomic) long long roRAM;
- (void)registerRecognition:(id)arg1;
- (void)allocNamedRoRAM:(id)arg1 defaultValues:(id)arg2;
- (id)initWithSignalName:(id)arg1 defaultValue:(float)arg2;

@end

