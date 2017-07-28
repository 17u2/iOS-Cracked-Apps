//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSString;

@interface TTOOMMonitor : NSObject
{
    NSString *_stateDirectory;
    NSString *_terminationEventFile;
    NSString *_terminationEventFileContents;
    NSString *_backgroundStateFile;
    _Bool _appWasBackgroundedOnExit;
    _Bool _hasChecked;
    long long _lastTerminationType;
}

+ (id)oomMonitorStateDirectory;
@property(readonly, nonatomic) long long lastTerminationType; // @synthesize lastTerminationType=_lastTerminationType;
- (void).cxx_destruct;
- (void)handleTerminateNotification;
- (void)handleForegroundNotification;
- (void)handleBackgroundNotification;
- (void)logApplicationEnterForeground;
- (void)logApplicationEnterBackground;
- (void)logApplicationForcelyTermination;
- (void)logTerminationEvent:(id)arg1;
- (_Bool)checkOsUpdate:(id)arg1;
- (_Bool)checkDidTerminate;
- (_Bool)checkAppUpdated:(id)arg1;
- (_Bool)checkAppLaunchAfterFirstInstall:(id)arg1;
- (void)updateAppLaunchState;
- (id)loadLastAppLaunchState;
- (long long)runCheckWithWhetherCrashDetected:(_Bool)arg1;
- (id)init;
- (void)dealloc;

@end
