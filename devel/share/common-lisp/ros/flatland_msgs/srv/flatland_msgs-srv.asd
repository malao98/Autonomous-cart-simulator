
(cl:in-package :asdf)

(defsystem "flatland_msgs-srv"
  :depends-on (:roslisp-msg-protocol :roslisp-utils :geometry_msgs-msg
)
  :components ((:file "_package")
    (:file "DeleteModel" :depends-on ("_package_DeleteModel"))
    (:file "_package_DeleteModel" :depends-on ("_package"))
    (:file "MoveModel" :depends-on ("_package_MoveModel"))
    (:file "_package_MoveModel" :depends-on ("_package"))
    (:file "SpawnModel" :depends-on ("_package_SpawnModel"))
    (:file "_package_SpawnModel" :depends-on ("_package"))
  ))