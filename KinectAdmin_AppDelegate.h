//
//  KinectAdmin_AppDelegate.h
//  KinectAdmin
//
//  Created by Buzzy on 12/17/10.
//  Copyright Carnegie Mellon University 2010 . All rights reserved.
//

#import <Cocoa/Cocoa.h>

@interface KinectAdmin_AppDelegate : NSObject 
{
    NSWindow *window;
    
    NSPersistentStoreCoordinator *persistentStoreCoordinator;
    NSManagedObjectModel *managedObjectModel;
    NSManagedObjectContext *managedObjectContext;
}

@property (nonatomic, retain) IBOutlet NSWindow *window;

@property (nonatomic, retain, readonly) NSPersistentStoreCoordinator *persistentStoreCoordinator;
@property (nonatomic, retain, readonly) NSManagedObjectModel *managedObjectModel;
@property (nonatomic, retain, readonly) NSManagedObjectContext *managedObjectContext;

- (IBAction)saveAction:sender;
- (IBAction)setLEDOptions:sender;
- (IBAction)setTiltDegrees:sender;
@end
