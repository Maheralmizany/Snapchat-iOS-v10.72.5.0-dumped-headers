//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@protocol SCImageProcessRequest <NSObject>
@property(readonly, nonatomic) _Bool GPURequired;
@property(readonly, nonatomic) unsigned long long status;
- (void)cancel;
- (_Bool)runProgramsWithContext:(id <SCImageProcessContext>)arg1 GPUAvailable:(_Bool)arg2 error:(id *)arg3;
@end

